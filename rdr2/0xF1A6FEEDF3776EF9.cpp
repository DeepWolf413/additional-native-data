// guama2.ysc @ L33721
int func_738(char[4] cParam0)
{
  switch (func_1196(cParam0))
  {
    case 0:
      func_1238(cParam0);
      func_1239(cParam0);
      PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
      PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
      CAM::_0xF1A6FEEDF3776EF9();
      if (!func_375(iLocal_171, 1048576))
      {
        if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_176[7]) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_176[7]) > 24f) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_176[7], false))
        {
          func_135(cParam0, 10);
          func_401(&iLocal_171, 1048576);
        }
      }
      if (!func_375(iLocal_173, 1024))
      {
        if (func_1240(cParam0))
        {
          func_401(&iLocal_173, 1024);
        }
      }
      if (func_1241(Local_14.f_25[0], iLocal_482[5], 1, 0))
      {
        return 1;
      }
      break;
  }
  return 0;
}