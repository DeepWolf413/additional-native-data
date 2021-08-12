// braithwaites2.ysc @ L53089
bool func_1293()
{
  switch (iLocal_726)
  {
    case 0:
      iLocal_807 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
      iLocal_808 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
      CAM::SET_CAM_PARAMS(iLocal_807, 1704.155f, -1380.357f, 44.4533f, -5.0112f, -0.0008f, 146.2349f, 45f, 0, 1, 1, 2, 1, 0);
      CAM::SET_CAM_PARAMS(iLocal_808, 1707.09f, -1382.038f, 44.2823f, -3.2557f, -0.0008f, 131.518f, 45f, 0, 1, 1, 2, 1, 0);
      CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_808, iLocal_807, 4000, 1, 1);
      iLocal_804 = MISC::GET_GAME_TIMER();
      CAM::SHAKE_CAM(iLocal_808, "HAND_SHAKE", 0.2f);
      CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
      iLocal_726++;
      AUDIO::_0x36559148B78853B3(1, 1, 0);
      TASK::TASK_LOOK_AT_ENTITY(bLocal_785, Local_14.f_23[0], -1, 1024, 51, 1);
      VEHICLE::BRING_VEHICLE_TO_HALT(Local_14.f_19[0], 8f, 3, false);
      break;
    case 1:
      if ((MISC::GET_GAME_TIMER() - iLocal_804) > 3000)
      {
        iLocal_804 = MISC::GET_GAME_TIMER();
        TASK::TASK_CLEAR_LOOK_AT(bLocal_785);
        iLocal_726++;
        return true;
      }
      break;
  }
  return false;
}