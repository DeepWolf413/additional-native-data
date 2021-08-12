// coachrobberies.ysc @ L18436
float func_539()
{
  int iVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar1 = 0f;
  fVar2 = 0f;
  iVar0 = 0;
  while (iVar0 < 15)
  {
    if (Local_51.f_2214[iVar0 /*3*/].f_2)
    {
      fVar1 = (fVar1 + 1f);
      if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2214[iVar0 /*3*/]))
      {
        fVar2 = (fVar2 + OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Local_51.f_2214[iVar0 /*3*/], true));
      }
    }
    iVar0++;
  }
  fVar3 = (fVar2 - fVar1);
  fVar4 = (fVar3 / fVar1);
  fVar5 = (100f + (fVar4 * 100f));
  return fVar5;
}