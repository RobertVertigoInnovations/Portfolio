<template>
  <div id="navigation">
    <nav>
      <img id="imageVal" alt="Vue logo" src="../assets/Banner_No_Buttons.gif" />

      <router-link to="/"
        ><img
          id="homeButton"
          :src="homeButton"
          @mouseover="homeButton = homeButtonReturnHover"
          @mouseleave="homeButton = homeButtonReturn"
      /></router-link>

      <router-link to="/about"
        ><img id="aboutMeButton" :src="aboutMeButtonReturn"
      /></router-link>

      <router-link to="/projects"
        ><img id="projectsButton" :src="projectsButtonReturn"
      /></router-link>

      <router-link to="/"
        ><img id="contactMeButton" :src="contactMeButtonReturn"
      /></router-link>
    </nav>
    <router-view />
  </div>
</template>

<script>
export default {
  el: '#navigation',
  data() {
    return {
      homeButton: require('../assets/Home.gif'),
      homeButtonReturn: require('../assets/Home.gif'),
      homeButtonReturnHover: require('../assets/AnimatedHome.gif'),

      aboutMeButtonReturn: require('../assets/AboutMe.png'),
      //aboutMeButtonReturn: require('../assets/AboutMe.png'),

      projectsButtonReturn: require('../assets/Projects.png'),

      contactMeButtonReturn: require('../assets/Home.gif')
    }
  }
}
</script>

<style>
#imageVal {
  position: relative;
  width: 100%;
}
#homeButton {
  position: absolute;
  top: 15%;
  left: 14%;
}
#aboutMeButton {
  position: absolute;
  top: 15%;
  left: 35%;
}
#projectsButton {
  position: absolute;
  top: 15%;
  left: 55%;
}
#contactMeButton {
  position: absolute;
  top: 15%;
  left: 75%;
}
</style>
