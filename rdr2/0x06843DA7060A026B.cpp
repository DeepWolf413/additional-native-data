// abigail2_1.ysc @ L64768
void func_1766(int iParam0, vector3 vParam1)
{
  vector3 vVar0;

  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    vVar0 = { vParam1 };
    if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
    {
      ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
    }
    else
    {
      ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
    }
  }
}