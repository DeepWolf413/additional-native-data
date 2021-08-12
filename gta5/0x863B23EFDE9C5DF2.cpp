// fbi4_prep2.ysc @ L7476
void func_219(char* sParam0, int iParam1, int iParam2)
{
  struct<6> Var0;
  
  if (iLocal_96 != iParam1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
  {
    Var0 = { func_221() };
    if ((((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam0) && !TASK::IS_PED_IN_WRITHE(Local_252)) && !PED::IS_PED_RAGDOLL(Local_252)) && !PED::IS_PED_BEING_STUNNED(Local_252, 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_252))
    {
      func_220(&uLocal_293, cLocal_292, sParam0, 7, iParam2, 0);
    }
  }
}