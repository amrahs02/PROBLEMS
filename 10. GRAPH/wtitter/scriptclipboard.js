function copyToClipboard(text) {
    navigator.clipboard.writeText(text)
      .then(() => {
        console.log('Text copied to clipboard:', text);
      })
      .catch((error) => {
        console.error('Error copying text:', error);
      });
  }
  
  // Usage example
  const tweetText = 'Check out my amazing website! 🚀🌐 #WebDevelopment #JavaScript';
  copyToClipboard(tweetText);
  