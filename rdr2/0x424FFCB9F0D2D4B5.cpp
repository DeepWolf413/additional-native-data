// rcm_mr_mayor1.ysc @ L8883
void func_303(bool bParam0)
{
  if (bParam0)
  {
    if (VOLUME::_DOES_VOLUME_EXIST(iLocal_440))
    {
      VEHICLE::_0x424FFCB9F0D2D4B5(iLocal_440, 1);
      PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_440, 4, 0);
    }
    func_665(iLocal_440);
  }
  else
  {
    if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_440))
    {
      iLocal_440 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_401, vLocal_404, vLocal_407, "GALLERY_ROAD");
    }
    if (VOLUME::_DOES_VOLUME_EXIST(iLocal_440))
    {
      MISC::_0x2FCD528A397E5C88(iLocal_440, 1048632);
      VEHICLE::_0x424FFCB9F0D2D4B5(iLocal_440, 0);
      PATHFIND::_0xB03944057FD735BA(iLocal_440, 4, 0);
    }
  }
}