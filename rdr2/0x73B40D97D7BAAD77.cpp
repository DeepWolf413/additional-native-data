// beat_spooked_horse.ysc @ L1903
void func_53()
{
  if (STREAMING::_IS_IMAP_ACTIVE(841781567))
  {
    if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(841781567, Local_355.f_51))
    {
      STREAMING::_REMOVE_IMAP(841781567);
    }
  }
  if (STREAMING::_IS_IMAP_ACTIVE(143994875))
  {
    if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(143994875, Local_355.f_51))
    {
      STREAMING::_REMOVE_IMAP(143994875);
    }
  }
  if (STREAMING::_IS_IMAP_ACTIVE(2075691867))
  {
    if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(2075691867, Local_355.f_51))
    {
      STREAMING::_REMOVE_IMAP(2075691867);
    }
  }
  if (STREAMING::_IS_IMAP_ACTIVE(1915768280))
  {
    if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(1915768280, Local_355.f_51))
    {
      STREAMING::_REMOVE_IMAP(1915768280);
    }
  }
}