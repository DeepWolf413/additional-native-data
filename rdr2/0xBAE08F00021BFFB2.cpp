// rcm_crackpot2.ysc @ L32056
void func_1090(vector3 vParam0, float fParam3)
{
  int iVar0[20];
  int iVar21;
  int iVar22;

  PED::GET_PED_NEARBY_PEDS(Global_35, &iVar0, -1, -1);
  iVar21 = 0;
  while (iVar21 < iVar0)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar21]))
    {
      if (!PED::IS_PED_INJURED(iVar0[iVar21]))
      {
        iVar22 = PED::GET_PED_TYPE(iVar0[iVar21]);
        if (((iVar22 == 28 && BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(iVar0[iVar21], true, false)) < fParam3) && !PED::IS_PED_FLEEING(iVar0[iVar21])) && !func_1513(iVar0[iVar21]))
        {
          if (func_1514(iVar0[iVar21]))
          {
            TASK::TASK_SMART_FLEE_COORD(iVar0[iVar21], vParam0, 200f, -1, false, 1077936128);
            PED::SET_PED_KEEP_TASK(iVar0[iVar21], true);
          }
          else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0[iVar21])))
          {
            PED::_0xBAE08F00021BFFB2(iVar0[iVar21], 0);
            PED::_0x06D26A96CA1BCA75(iVar0[iVar21], 3, 1f, 0);
          }
        }
      }
    }
    iVar21++;
  }
}