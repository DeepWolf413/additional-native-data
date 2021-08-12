// act_caunc_rustling.ysc @ L43285
void func_1149(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 20)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
    {
      TASK::CLEAR_PED_TASKS(uParam0->f_2[iVar0], true, false);
      if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar0]))
      {
        FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar0]);
      }
    }
    iVar0++;
  }
}