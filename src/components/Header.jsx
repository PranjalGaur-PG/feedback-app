import React from 'react';


function Header({text, bgColor, textColor}) {
    const HeaderStyles = {
        backgroundColor : bgColor,
        color : textColor
    }

    return (
        <header style={HeaderStyles}>
            <div className="container">
                {text}
            </div>
        </header>
    )
}

export default Header