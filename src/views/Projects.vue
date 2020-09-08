<template>
  <!--<div class="projects">

    <projectList></projectList>
  </div>-->
  <div class="projects">
    <Cprojects></Cprojects>
    <UIUXprojects></UIUXprojects>
    <FullScaleProjects></FullScaleProjects>
  </div>
</template>
<script>
/*import ProjectList from '@/components/ProjectList.vue'*/
import Cprojects from "@/components/Cprojects.vue";
import UIUXprojects from "@/components/UIUXprojects.vue";
import FullScaleProjects from "@/components/FullScaleProjects.vue";
export default {
  name: "Projects",
  components: {
    /* ProjectList */ Cprojects: Cprojects,
    UIUXprojects: UIUXprojects,
    FullScaleProjects: FullScaleProjects
  }
};
</script>
<style>
.projects {
  background-color: rgb(26, 26, 32);
}
</style>
