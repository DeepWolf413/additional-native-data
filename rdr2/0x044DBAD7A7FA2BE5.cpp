// aberdeenpigfarm.ysc @ L4833
void func_206(int iParam0, bool bParam1)
{
  switch (iParam0)
  {
    case 5:
      if (bParam1)
      {
        AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
      }
      else
      {
        AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
      }
      break;
  }
}