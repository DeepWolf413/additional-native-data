// act_caunc_rustling.ysc @ L43409
void func_1160(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 20)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
    {
      ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_2[iVar0]);
    }
    iVar0++;
  }
}