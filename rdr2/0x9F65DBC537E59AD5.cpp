// fussar1.ysc @ L54570
void func_1320()
{
  switch (iLocal_163)
  {
    case 0:
      if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_361[22]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_361[22], false)) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_361[23]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_361[23], false)))
      {
        if ((!CAM::_0xA24C1D341C6E0D53(1, 0, 0) && PED::IS_PED_GOING_INTO_COVER(Global_35)) && func_1252(Global_35, TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_1140[0]), 1f, 1, 0))
        {
          func_212(&uLocal_1193);
          func_1819(1);
        }
      }
      break;
    case 1:
      func_1820(&uLocal_1192, 1491.633f, -7164.293f, 73.854f, -4.3304f, 0.0558f, 24.0848f, 2000, 34.795f, 1, 1);
      if (func_1289(&uLocal_1193) >= 5000)
      {
        func_1821(&uLocal_1192, 1, 3000);
        func_1819(2);
      }
      break;
    case 2:
      break;
  }
}