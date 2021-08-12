// agency_prep2amb.ysc @ L11737
void func_240()
{
  if (!HUD::IS_STREAMING_ADDITIONAL_TEXT(5))
  {
    MISC::SET_BIT(&iLocal_105, 4);
  }
  else
  {
    MISC::CLEAR_BIT(&iLocal_105, 4);
  }
}