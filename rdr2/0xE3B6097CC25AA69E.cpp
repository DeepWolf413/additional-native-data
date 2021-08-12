// beat_rally.ysc @ L3198
bool func_114()
{
  int iVar0;

  if (func_60(Global_35, Local_43.f_51, 1) < 25f)
  {
    func_266();
    iVar0 = 0;
    while (iVar0 < 12)
    {
      if (Local_43.f_98[iVar0] < 5f)
      {
        if (PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_823[iVar0]))
        {
          return true;
        }
        if (ENTITY::DOES_ENTITY_EXIST(iLocal_851) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_851, uLocal_823[iVar0]))
        {
          return true;
        }
      }
      iVar0++;
    }
  }
  return false;
}