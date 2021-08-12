// marston2.ysc @ L56491
void func_1376(char[4] cParam0)
{
  switch (iLocal_1428)
  {
    case 0:
      if (func_984(cParam0))
      {
        PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
        func_1890(1);
      }
      break;
    case 1:
      if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(cParam0->f_7375.f_804, false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(cParam0->f_7375.f_804)) || ANIMSCENE::_0x005E6F28DD7ED58D(cParam0->f_7375.f_804, "JOHN"))
      {
        TASK::TASK_VEHICLE_GOTO_NAVMESH(Global_35, iLocal_72, -1745.096f, 328.5099f, 110.404f, 7.5f, 0, 5f);
        func_225(&uLocal_1425);
        func_1890(2);
      }
      break;
    case 2:
      if (func_928(&uLocal_1425) > 6f || (func_928(&uLocal_1425) > 3f && PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE"))))
      {
        TASK::CLEAR_PED_TASKS(Global_35, true, false);
        PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
        func_1890(3);
      }
      break;
    case 3:
      break;
  }
}