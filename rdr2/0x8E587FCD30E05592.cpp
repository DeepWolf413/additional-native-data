// camera_item.ysc @ L720
void func_3()
{
  Local_47.f_106 = GRAPHICS::_0xB28894CD7408BD0C();
  if (Local_47.f_106 == 1)
  {
  }
  if (Local_47.f_106 == 0)
  {
    bLocal_12 = false;
    iLocal_14 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
    iLocal_15 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
    uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
    uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
    uLocal_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel0", " ");
    uLocal_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel1", " ");
    uLocal_25 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel2", " ");
    uLocal_26 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel3", " ");
    func_63();
    iLocal_13 = 0;
    bLocal_17 = true;
    iLocal_18 = MISC::GET_GAME_TIMER();
  }
  else if (Local_47.f_106 == 2)
  {
    bLocal_12 = true;
    uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
    uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "failed/failed");
    func_19();
    iLocal_13 = 0;
    bLocal_17 = false;
  }
}