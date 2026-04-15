/*
 * File:    pipe_limit.c
 * Author:  Alexander Vindelinckx
 * Date:    14-4-2026
 *
 * Description:
 *   Finds the pipe buffer capacity by writing one byte at a
 *   time in non-blocking mode until EAGAIN, then reporting
 *   the total bytes written.
 */

//Libraries
#include <stdio.h>
#include <rpc/rpc.h>
#include <rpcsvc/rstat.h>
//Poll the host

void do_poll(char* host){
    int     stat;
    struct  statstime   result_stats;

    stat = callrpc(host, RSTATPROG, RSTATVERS_TIME, RSTATPROC_STATS,
                    xdr_void, 0, xdr_statstime, &result_stats);
    if (stat == RPC_SUCCESS)
    {
        fprintf(stdout, "DATA %s %ld %ld\n", host, 
        result_stats.boottime.tv_sec, result_stats.curtime.tv_sec);
    }

}

