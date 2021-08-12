// agency_heist3a.ysc @ L12441
int func_132(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0))
      {
        return 1;
      }
    }
  }
  return 0;
}