// Basic email validation using regex pattern
function validateEmailWithRegex(email) {
    const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    return regex.test(email);
}

// Advanced email validation using a third-party API
async function validateEmailWithAPI(email) {
    const apiKey = 'YOUR_API_KEY'; // Replace with your actual API key
    const apiUrl = `https://emailvalidationapi.com/v1?apiKey=${apiKey}&email=${encodeURIComponent(email)}`;

    try {
        const response = await fetch(apiUrl);
        if (!response.ok) {
            throw new Error('API request failed');
        }

        const result = await response.json();
        return result.isValid;
    } catch (error) {
        console.error('Error validating email with API:', error);
        return false;
    }
}

// Example usage
const email = 'test@example.com';

if (validateEmailWithRegex(email)) {
    console.log(`${email} is a valid email address (regex)`);
} else {
    console.log(`${email} is not a valid email address (regex)`);
}

validateEmailWithAPI(email)
    .then(isValid => {
        if (isValid) {
            console.log(`${email} is a valid email address (API)`);
        } else {
            console.log(`${email} is not a valid email address (API)`);
        }
    })
    .catch(error => {
        console.error('Error:', error);
    });
