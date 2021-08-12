// beat_animal_mauling.ysc @ L977
bool func_17(var uParam0, var uParam1)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
    {
      if (iVar0 != 2)
      {
        (*uParam1)[iVar0] = func_60(uParam0->f_1[iVar0 /*32*/].f_1, &(uParam0->f_1[iVar0 /*32*/]), uParam0->f_1[iVar0 /*32*/].f_6, uParam0->f_1[iVar0 /*32*/].f_9, 1, 0, 1, 0, 1);
      }
      else
      {
        (*uParam1)[iVar0] = func_60(uParam0->f_1[iVar0 /*32*/].f_1, &(uParam0->f_1[iVar0 /*32*/]), uParam0->f_1[iVar0 /*32*/].f_6, uParam0->f_1[iVar0 /*32*/].f_9, 1, 1, 1, 0, 1);
      }
      if (iVar0 == 1)
      {
        PED::_SET_PED_SCALE((*uParam1)[iVar0], 1f);
      }
      return false;
    }
    iVar0++;
  }
  return true;
}