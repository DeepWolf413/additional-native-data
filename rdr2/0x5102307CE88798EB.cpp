// beat_spooked_horse.ysc @ L8953
void func_237()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 12)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_904[iVar0 /*23*/]))
    {
      if (!PED::_0x5102307CE88798EB(Local_904[iVar0 /*23*/]))
      {
        PED::REQUEST_PED_VISIBILITY_TRACKING(Local_904[iVar0 /*23*/]);
      }
      else if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_904[iVar0 /*23*/]) || !PED::_0x164CECC59E70DF86(Local_904[iVar0 /*23*/], 10f))
      {
        PED::DELETE_PED(&(Local_904[iVar0 /*23*/]));
      }
      else
      {
        TASK::_TASK_SMART_FLEE_STYLE_PED(Local_904[iVar0 /*23*/], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
        func_232(&(Local_904[iVar0 /*23*/]), 1, 0, 1);
      }
      Local_904[iVar0 /*23*/].f_2 = 4;
    }
    iVar0++;
  }
}