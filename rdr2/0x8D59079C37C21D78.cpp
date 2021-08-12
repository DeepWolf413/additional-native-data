// beat_savage_warning.ysc @ L5389
void func_134(int iParam0)
{
  if (PHYSICS::DOES_ROPE_EXIST(iLocal_236[iParam0]))
  {
    PHYSICS::_0x8D59079C37C21D78(iLocal_236[iParam0], 2f);
    PHYSICS::_0x522FA3F490E2F7AC(iLocal_236[iParam0], 1, 1);
    switch (iParam0)
    {
      case 0:
        func_185(iParam0, 0, 1, "PH_R_AnkleDist");
        break;
    }
  }
}