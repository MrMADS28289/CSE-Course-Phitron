const inputValue = (event) => {
  fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${event.value}`)
    .then((res) => res.json())
    .then((data) => showMeal(data))
    .catch((err) => console.log(err));
};

const showMeal = (meals) => {
  const mealsDiv = document.getElementById("mealDiv");
  mealsDiv.innerHTML = "";
  if (meals.meals) {
    meals.meals.forEach((meal) => {
      const card = document.createElement("div");
      card.className = "card";
      card.innerHTML = `
        <img src="${meal.strMealThumb}" alt="Food Image" class="card-image" />
        <div class="card-content">
          <h2 class="food-name">${meal.strMeal}</h2>
          <p class="food-description">${
            meal.strInstructions.slice(0, 100) + "...."
          }</p>
          <div class="card-footer">
            <span class="food-price">${meal.strArea}</span>
            <button class="order-btn">Order Now</button>
          </div>
        </div>
      `;
      mealsDiv.appendChild(card);
    });
  } else {
    const card = document.createElement("div");
    card.className = "notFound";
    card.innerHTML = `
    <h1> Not Found </h1>
    `;
    mealsDiv.appendChild(card);
  }
  console.log(meals.meals);
};
