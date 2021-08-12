// mudtown3.ysc @ L62002
bool func_1552()
{
  if (func_167(32))
  {
    return true;
  }
  if (!func_167(34))
  {
    VEHICLE::_0x87344305778E5415(Local_579, 1);
    VEHICLE::_0x8C6D9A399126C194(Local_579, 20);
    VEHICLE::SET_VEHICLE_FIXED(Local_579);
    func_398(34);
  }
  if (func_1526(&Local_579))
  {
    func_398(32);
  }
  return false;
}