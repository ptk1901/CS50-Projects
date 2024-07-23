//listening till dom is loaded
document.addEventListener('DOMContentLoaded', function(){
    //initializing variables
    //giving name to the button with incorrect option
    let incorrect_button = document.querySelectorAll('.incorrect');
    //giving name to the button with empty space
    var newtext = document.getElementById("newtext");
    //giving name to the button with correct option
    let correct_button = document.querySelector('.correct');
    let buttons = document.querySelectorAll('button')
        correct_button.addEventListener('click', function(){
        //preventing submition of form
        event.preventDefault();
        //changing color
        correct_button.style.backgroundColor= '#D1FFBD';
        newtext.innerHTML = 'Correct! :)';
        //disabling buttons
        buttons.forEach(function(buttons){
            buttons.disabled = true;
        })
    })
    incorrect_button.forEach(function(incorrect_button){
        incorrect_button.addEventListener('click', function(){
            //preventing submition of form
            event.preventDefault()
            //changing color
            incorrect_button.style.backgroundColor= '#FE5C5C';
            newtext.innerHTML = 'InCorrect! :(';
            //disabling buttons
            buttons.forEach(function(buttons){
                buttons.disabled = true;
            })
        })
    })
    })
    function changecolor(){
        let ipfield = document.querySelector("#ipfield")
        let submitbutton = document.querySelector("#submitbutton")
        var newtext2 = document.getElementById("newtext2");
        let userip = document.querySelector('#ipfield').value;
        let capitaluserip = userip.toUpperCase();
        let answer= "SOLID";
        let answer2= "SOLIDS";
        if(capitaluserip.localeCompare(answer) === 0 || capitaluserip.localeCompare(answer2) === 0){
            newtext2.innerHTML = 'Correct! :)';
            document.querySelector("#ipfield").style.backgroundColor = "#D1FFBD"
            submitbutton.disabled = "true"
            ipfield.disabled = "true"

        }
        else{
            newtext2.innerHTML = 'InCorrect! :)';
            document.querySelector("#ipfield").style.backgroundColor = "#FE5C5C"
            submitbutton.disabled = "true"
            ipfield.disabled = "true"
        }
        }
