function palindrome(str) {
  var lowerCaseStr = str.replace(/[\W_]/g, '').toLowerCase();
  str = lowerCaseStr.split('').reverse().join('');
  
  if (str == lowerCaseStr) {
    return true;
  } else {
    return false;
  }
}

palindrome("race car");
