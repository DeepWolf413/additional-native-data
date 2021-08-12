// mob2.ysc @ L18586
void func_174(bool bParam0)
{
  if (bParam0)
  {
    VEHICLE::SET_RANDOM_TRAINS(true);
  }
  else
  {
    VEHICLE::SET_RANDOM_TRAINS(false);
    VEHICLE::_0x4C05B42A8D937796();
    VEHICLE::DELETE_ALL_TRAINS();
  }
}