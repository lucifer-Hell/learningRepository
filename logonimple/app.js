const express = require('express')
const session=require('express-session');
const passport=require('passport');
const cookieParser=require('cookie-parser');
const bodyParser=require('body-parser');
const app = express()
const port = 3000;
const LocalStrategy = require('passport-local').Strategy;

var path = require('path');
app.use(express.static(path.join(__dirname, 'public')));
app.use(cookieParser());
app.use(bodyParser());

var urlencodedParser = bodyParser.urlencoded({ extended: false })
app.use(session({ secret: 'fuckitup' ,
resave: false,
saveUninitialized: true,
}));
app.use(passport.initialize());
app.use(passport.session());

passport.serializeUser(function(username, done) {
    done(null, username);
  });
  
  passport.deserializeUser(function(username, done) {
        if(username==aemail){
            return done(null,username);
        }
        else{
            return done(null,false);
        }
  });




var aemail='cto@bwm';
var apassword=007;



passport.use(new LocalStrategy({
    usernameField: 'email',
    passwordField: 'password'
},
    function(username, password, done) {
     
        
        if (username!=aemail) {
          return done(null, false, { message: 'Incorrect username.' });
        }
        if (password!=apassword) {
          return done(null, false, { message: 'Incorrect password.' });
        }
        return done(null, username);
      
    }
  ));





/// routes
app.get('/',(req,res)=>{
    if(req.user){
        res.render('admin.ejs',{user:req.user});
    }
    
    else{
    res.send("Welcome unknow user");

    }

});


app.get('/login',(req,res)=>{
    if(req.user){
        res.render('admin.ejs',{user:req.user});
    }
    else{
    res.render('logon.ejs');}
})

app.post('/login',passport.authenticate('local', { successRedirect: '/',
failureRedirect: '/login',
failureFlash: false })
);





app.get('/logout', function(req, res){
    req.logout();
    res.redirect('/');
  });


app.listen(port, () => console.log(`Example app listening on port ${port}!`))