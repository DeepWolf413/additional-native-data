// fm_capture_creator.ysc @ L190389
void func_1702(var uParam0, int iParam1)
{
  float fVar0;
  float fVar1;
  struct<3> Var2;
  
  Var2 = { CAM::GET_CAM_COORD(*uParam0) };
  if (ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    if (func_1705(Var2, iParam1, 3f))
    {
      fVar0 = func_1704(iParam1);
      fVar1 = func_1703(iParam1);
      if (fVar0 >= (Var2.f_2 - 3f) && fVar1 < (Var2.f_2 + 3f))
      {
        uParam0->f_2 = { Var2.x, Var2.f_1, (fVar0 + 3f) };
        CAM::SET_CAM_COORD(*uParam0, uParam0->f_2);
        CAM::SET_FLY_CAM_COORD_AND_CONSTRAIN(*uParam0, uParam0->f_2);
      }
    }
  }
}