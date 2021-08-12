// abigail2_1.ysc @ L38476
void func_937(var uParam0, bool bParam1)
{
  if (*uParam0 != -1)
  {
    func_1458(*uParam0, -1);
    func_1459(*uParam0, 0);
    func_1460(*uParam0, 0);
    if (MAP::DOES_BLIP_EXIST(Global_36308[*uParam0]))
    {
      if (bParam1)
      {
        MAP::SET_RADAR_ZOOM(Global_36308[*uParam0]);
      }
      MAP::REMOVE_BLIP(&(Global_36308[*uParam0]));
    }
  }
  *uParam0 = -1;
}