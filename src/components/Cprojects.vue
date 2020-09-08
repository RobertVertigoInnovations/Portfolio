<template>
  <b-container fluid class="cardOverlay">
    <b-row>
      <b-col class="titleOverlay">
        <h1>C Projects</h1>
      </b-col>
    </b-row>

    <b-row class="containerBox" align-h="between">
      <b-col cols="4" id="projectListBox">
        <b-col class="projectListBoxTitle">
          <h2>Project List</h2>
        </b-col>
        <b-col cols="12" id="projectListBoxPh">
          <projectList></projectList>
        </b-col>
      </b-col>
      <b-col cols="7" id="projectDescriptionBox">
        <b-col id="projectDescriptionBoxTitle">
          <h2>Description</h2>
        </b-col>
      </b-col>
    </b-row>
  </b-container>
</template>

<script>
import ProjectList from "@/components/ProjectList.vue";
export default {
  name: "Cprojects",
  components: {
    ProjectList: ProjectList,
  },
};
</script>

<style>
.cardOverlay {
  border-width: 1px;
  border-style: solid;
  border-color: black;
  color: white;
}
.containerBox {
  background-color: rgb(6, 34, 128);
  padding-bottom: 5%;
}
.titleOverlay {
  background-color: rgb(22, 22, 22);
  border-width: 5px;
  border-style: solid;
  border-color: rgb(4, 0, 59);
}
#projectListBox {
  border-width: 5px;
  border-style: solid;
  border-color: rgb(4, 0, 59);
  padding-left: 0;
  padding-right: 0;
  background-color: rgb(209, 215, 250);
  box-shadow: 20px 20px 50px 15px blue;
  margin-left: 1%;
  margin-top: 2%;
}
.projectListBoxTitle {
  background-color: rgb(22, 22, 22);
  border-width: 3px;
  border-style: solid;
  border-color: rgb(4, 0, 59);
}
#projectListBoxPh {
  padding-bottom: 65%;
}
#projectDescriptionBox {
  border-width: 5px;
  border-style: solid;
  border-color: rgb(4, 0, 59);
  padding-left: 0;
  padding-right: 0;
  margin-right: 1%;
  box-shadow: 20px 20px 50px 15px blue;

  margin-top: 2%;
}
#projectDescriptionBoxTitle {
  background: rgb(22, 22, 22);
  border-width: 3px;
  border-style: solid;
  border-color: rgb(4, 0, 59);
}
</style>
