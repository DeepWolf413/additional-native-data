// trainrobbery_ambient.ysc @ L3349
void func_120(int iParam0, int iParam1, bool bParam2)
{
  if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iParam1 /*22*/].f_1))
  {
    return;
  }
  if (!func_11(iParam0->f_1[iParam1 /*22*/].f_4, 16))
  {
    if (bParam2)
    {
      func_208(iParam0->f_1[iParam1 /*22*/].f_1, 0);
    }
    VEHICLE::_0xD4907EF4334C7602(iParam0->f_1[iParam1 /*22*/], 1);
    VEHICLE::_0x68830738A6BFB370(iParam0->f_1[iParam1 /*22*/], 1);
    ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 0);
    func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 16);
  }
  else if (bParam2 && !func_11(iParam0->f_1[iParam1 /*22*/].f_4, 8192))
  {
    func_208(iParam0->f_1[iParam1 /*22*/].f_1, 0);
    func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 8192);
  }
}