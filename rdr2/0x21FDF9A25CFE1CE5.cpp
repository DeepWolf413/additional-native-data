// act_caunc_rustling.ysc @ L13517
void func_278(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 20)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
    {
      if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_447))
      {
        TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, uParam0->f_447, 1, 1);
      }
      else
      {
        TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, 0, 1, 1);
      }
      uParam0->f_23[iVar0] = 0;
    }
    iVar0++;
  }
}