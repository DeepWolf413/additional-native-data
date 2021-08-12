// ambient_ufos.ysc @ L454
void func_12()
{
  if (STREAMING::IS_IPL_ACTIVE("ufo"))
  {
    STREAMING::REMOVE_IPL("ufo");
  }
  func_4(&iLocal_102);
  func_4(&iLocal_101);
  func_4(&iLocal_92);
  AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", false, true);
  AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", false, true);
  func_1();
  SCRIPT::TERMINATE_THIS_THREAD();
}