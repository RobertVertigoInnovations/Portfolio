<template>
  <div class="theList">
    <select id="selectCustomize">
      <option v-for="item in projectList" :key="item.name" id="selectOverlay">
        {{ item.name } }</option
      >
    </select>
  </div>
</template>

<script>
export default {
  name: "ProjectList",
  data() {
    return {
      projectList: [
        { name: "Place Holder 1", value: "Value of PH 1" },
        { name: "Place Holder 2", value: "Value of PH 2" }
      ]
    };
  }
};
</script>

<style>
#selectCustomize {
  width: 50%;
  font-size: 2em;
  background-color: transparent;
  border-left: none;
  border-right: none;
  border-top: none;
}
</style>
