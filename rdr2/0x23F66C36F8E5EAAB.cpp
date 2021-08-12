// gang2.ysc @ L36099
void func_792(char[4] cParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_378[1]))
  {
    if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_378[1], -1))
    {
      if (!func_388(iLocal_115, 8192))
      {
        VEHICLE::_0x697DF68F3A761A50(iLocal_378[1]);
        if (func_33(cParam0) == 8 && func_793(cParam0))
        {
          VEHICLE::_0x23F66C36F8E5EAAB(iLocal_378[1], 0);
        }
        else
        {
          VEHICLE::_0x23F66C36F8E5EAAB(iLocal_378[1], 1);
        }
        func_416(&iLocal_115, 8192);
      }
    }
    else if (func_388(iLocal_115, 8192))
    {
      VEHICLE::_0x697DF68F3A761A50(iLocal_378[1]);
      func_1396(&iLocal_115, 8192);
    }
  }
}