// player_menu.ysc @ L1090
void func_51(var uParam0)
{
  int iVar0;
  int iVar1;
  var uVar2;
  var uVar3;

  iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_48(71));
  switch (iVar0)
  {
    case 2:
      iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_48(50));
      uVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
      NETWORK::_0x16EFB123C4451032(uVar2, &uVar3);
      NETWORK::NETWORK_SHOW_PROFILE_UI(&uVar3);
      break;
  }
}