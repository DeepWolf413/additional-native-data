// trainrobbery_ambient.ysc @ L3317
void func_119(int iParam0, int iParam1)
{
  if (func_11(iParam0->f_1[iParam1 /*22*/].f_4, 65536))
  {
    return;
  }
  switch (iParam0->f_1[iParam1 /*22*/].f_3)
  {
    case 0:
      if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
      {
        if (func_215(iParam0, iParam1))
        {
          ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 1);
        }
        func_74(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
        if (!func_11(iParam0->f_1[iParam1 /*22*/].f_4, 131072))
        {
          PED::_0xF008E0BA1FE1D644(func_86(iParam0, iParam1));
          func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 131072);
        }
        iParam0->f_1[iParam1 /*22*/].f_3 = 2;
      }
      break;
    case 2:
      func_216(iParam0, iParam1);
      func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
      func_217(iParam1);
      break;
  }
}