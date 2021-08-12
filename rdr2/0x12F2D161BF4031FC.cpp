// camp_beaverhollow.ysc @ L12918
void func_424()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 24)
  {
    if (iVar0 < 6 || iVar0 >= 23)
    {
      PED::_0x12F2D161BF4031FC(iVar0, 0.5f);
    }
    else if (iVar0 < 12)
    {
      PED::_0x12F2D161BF4031FC(iVar0, 1.5f);
    }
    else
    {
      PED::_0x12F2D161BF4031FC(iVar0, 1f);
    }
    iVar0++;
  }
}