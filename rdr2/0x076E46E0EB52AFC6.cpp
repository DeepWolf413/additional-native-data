// braithwaites3.ysc @ L54708
void func_1310()
{
  if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_673 && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35) != -543798088)
  {
    switch (iLocal_744)
    {
      case 0:
        func_1736();
        func_220(&(vLocal_558[6 /*3*/]));
        iLocal_744++;
        break;
      case 1:
        if (func_912(&(vLocal_558[6 /*3*/])) >= 3f)
        {
          func_1736();
          func_220(&(vLocal_558[6 /*3*/]));
          iLocal_744++;
        }
        break;
      case 2:
        if (func_912(&(vLocal_558[6 /*3*/])) >= 6f)
        {
          iLocal_744 = 0;
        }
        break;
    }
  }
}