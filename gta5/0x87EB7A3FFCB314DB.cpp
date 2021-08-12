// appcontacts.ysc @ L10079
int func_182(var uParam0, int iParam1)
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
  {
    *iParam1 = 2;
  }
  else if (uParam0->f_2936 < uParam0->f_33)
  {
    if (func_178((*uParam0)[uParam0->f_2936], 0, 1))
    {
      return 1;
    }
    else
    {
      *iParam1 = 2;
    }
  }
  else
  {
    iVar0 = func_172(uParam0->f_2936, uParam0);
    if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(uParam0->f_34[iVar0 /*29*/])))
    {
      return 1;
    }
    else
    {
      *iParam1 = 0;
    }
  }
  return 0;
}