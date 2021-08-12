// smuggler2.ysc @ L54178
void func_1247(int iParam0, vector3 vParam1, float fParam4)
{
  func_849(11);
  if (iParam0 == -1)
  {
    GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(5), vParam1, 0f, 0f, 0f, fParam4, false, false, false);
  }
  else
  {
    GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(5), vParam1, func_1737(func_1689(Local_1700.f_3[iParam0 /*33*/].f_13.f_13, vParam1, 1f)), fParam4, false, false, false);
  }
  FIRE::ADD_EXPLOSION(vParam1, 25, 0.1f, true, true, 0f);
  if (CAM::DOES_CAM_EXIST(iLocal_1494[0]))
  {
    CAM::SHAKE_CAM(iLocal_1494[0], func_1294(15), func_1738(vParam1));
  }
  else
  {
    CAM::SHAKE_GAMEPLAY_CAM(func_1294(15), func_1738(vParam1));
  }
  PED::_0x09E378C52B1433B5(Global_35, vParam1, fParam4);
  PED::_0x09E378C52B1433B5(Local_424[2 /*8*/], vParam1, fParam4);
  PED::_0x09E378C52B1433B5(Local_424[3 /*8*/], vParam1, fParam4);
}