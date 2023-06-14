function convertToAmPm(hours, minutes) {
    let period = "AM";
    
    if (hours >= 12) {
      period = "PM";
      if (hours > 12) {
        hours -= 12;
      }
    }
    
    if (hours === 0) {
      hours = 12;
    }
    
    console.log(`${hours.toString().padStart(2, '0')}:${minutes.toString().padStart(2, '0')} ${period}`);
  }
  

  const hours = parseInt(prompt("Enter hours:"));
  const minutes = parseInt(prompt("Enter minutes:"));

  convertToAmPm(23, 15);
  convertToAmPm(22, 16);  
  
main
  
