// fmmc_playlist_controller.ysc @ L93311
void func_496()
{
  var uVar0;
  var uVar1;
  var uVar2;
  
  MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &uVar2);
  MISC::SET_OVERRIDE_WEATHER("clear");
  func_462(4, 0);
  MISC::_CLEAR_CLOUD_HAT();
}