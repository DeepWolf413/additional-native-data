// beat_pickpocket.ysc @ L1543
void func_39(bool bParam0)
{
  if (func_3(iLocal_449, -2147483648) || !func_3(iLocal_449, 1073741824 /* Float: 2f */))
  {
    return;
  }
  if (AUDIO::_0x4A98E228A936DBCC(Global_35) == iLocal_476 || bParam0)
  {
    PLAYER::_0x216BC0D3D2E413D2(PLAYER::PLAYER_ID(), 0);
    func_34(&iLocal_449, -2147483648);
  }
}