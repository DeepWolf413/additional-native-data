// aberdeenpigfarm.ysc @ L4816
void func_205(int iParam0, bool bParam1)
{
  char* sVar0;

  switch (iParam0)
  {
    case 5:
      sVar0 = "IZ_val_saloon_int_room_main";
      break;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    return;
  }
  AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}