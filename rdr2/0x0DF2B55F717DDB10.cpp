// map_app_event_handler.ysc @ L859
bool func_20(int iParam0, var uParam1)
{
  var uVar0;
  var uVar1;
  bool bVar2;

  bVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
  *uParam1 = uVar0;
  uParam1->f_1 = uVar1;
  return bVar2;
}