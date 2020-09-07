<template>
  <div class="theList">
    <select id="selectCustomize">
      <option v-for="todo in projectList" :key="todo.name" id="selectOverlay">
        {{ todo.name }}
      </option>
    </select>
  </div>
</template>

<script>
export default {
  data() {
    return {
      projectList: [
        { name: 'Place Holder 1', value: 'Value of PH 1' },
        { name: 'Place Holder 2', value: 'Value of PH 2' }
      ]
    }
  }
}
</script>

<style>
#selectCustomize {
  width: 50%;
  font-size: 3em;
  background-color: transparent;
  border-left: none;
  border-right: none;
  border-top: none;
  padding-left: 20%;
}
</style>
