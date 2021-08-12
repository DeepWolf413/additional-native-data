// exile3.ysc @ L58355
void func_559(bool bParam0)
{
  int iVar0;
  
  iVar0 = func_281();
  if (!PED::IS_PED_INJURED(iVar0))
  {
    iLocal_1552 = TASK::ADD_COVER_POINT(-485.2f, 4400.4f, 30.4f, 11.3f, 2, 0, 0, false);
    if (bParam0)
    {
      TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar0, -485.16f, 4399.73f, 30.67f, -1, false, 0f, true, false, iLocal_1552, false);
      PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
    }
    else
    {
      TASK::TASK_SEEK_COVER_TO_COVER_POINT(iVar0, iLocal_1552, -488.99f, 4436.39f, 31.15f, -1, true);
    }
  }
}