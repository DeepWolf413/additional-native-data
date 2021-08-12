// act_bankrobbery01.ysc @ L53545
bool func_1676(vector3 vParam0, int iParam3)
{
  if (!STREAMING::_0xCF45DF50C7775F2A())
  {
    func_1203(0, 0);
    STREAMING::_0x387AD749E3B69B70(vParam0, CAM::GET_GAMEPLAY_CAM_ROT(2), iParam3, 7);
    STREAMING::_0xA8432A14D4DC2101(vParam0);
    return false;
  }
  else if (!STREAMING::_0x0909F71B5C070797())
  {
    return false;
  }
  STREAMING::_0x5A8B01199C3E79C3();
  return true;
}